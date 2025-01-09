////random 2d arr and multi & transpose
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// #define size 1000
// void fillmat(int **m,int n){
// for(int i=0;i<n;i++){
//   for(int j=0;j<n;j++){
//     m[i][j]=rand()%2;   // store 0 or 1
//     }
//   }
// }
// void multmat(int **a,int **b,int **r,int n){
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       r[i][j]=0;
//       for(int k=0;k<n;k++){
//         r[i][j]+=(a[i][k]*b[k][j]);
//       }
//     }
//   }
// }
// void main(){
//   time_t start=clock();
//   // int n;
//   int **m1=(int**)malloc(size*sizeof(int*));
//   int **m2=(int**)malloc(size*sizeof(int*));
//   int **r=(int**)malloc(size*sizeof(int*));
//       for(int i=0;i<size;i++){
//         m1[i]=(int*)malloc(size*sizeof(int));
//         m2[i]=(int*)malloc(size*sizeof(int));
//         r[i]=(int*)malloc(size*sizeof(int));
//           if(!m1[i] || !m2[i] || !r[i]){
//     printf("malloc failed.");
//   }
//       }
//   fillmat(m1,size);
//   fillmat(m2,size);
//   multmat(m1,m2,r,size);
// for(int i=0;i<size;i++){
//   for(int j=0;j<size;j++){
//     printf("%d",r[i][j]);
//   }
// }
// for(int i=0;i<size;i++){
//   free(m1[i]);
//     free(m2[i]);
//   free(r[i]);
// }
// free(m1);
// free(m2);
// free(r);
// time_t end=clock();
// double t_taken=(double)(end-start)/CLOCKS_PER_SEC;
// printf("TIME taken: %.2f second\n",t_taken);
// //  return 0;
// }

////srand(time(NULL)); seed the random num generator
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main() {
//     srand(time(NULL));  // Seed the random number generator
//     for (int i = 0; i < 5; i++) {
//         printf("%d\n", rand() % 10);  // Produces a different sequence each run
//     }
//     return 0;
// }

////Impliment ADT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_WORD_LENGTH 100    // Maximum length of a word
#define INITIAL_CAPACITY 10000 // Initial capacity for storing words
// Define the Passage ADT
typedef struct {
    char **words;   // Array of words
    size_t size;    // Current number of words
    size_t capacity; // Maximum capacity
} Passage;
// Function prototypes
Passage *create_passage(const char *filename);
void free_passage(Passage *passage);
int search_exact(Passage *passage, const char *word);
int search_pattern(Passage *passage, const char *pattern);
void print_results(const char *query, int result);
// Create a Passage by reading all lines from a file
Passage *create_passage(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error: Unable to open file %s\n", filename);
        return NULL;
    }
    Passage *passage = (Passage *)malloc(sizeof(Passage));
    if (!passage) {
        printf("Error: Memory allocation failed.\n");
        fclose(file);
        return NULL;
    }
    passage->size = 0;
    passage->capacity = INITIAL_CAPACITY;
    passage->words = (char **)malloc(passage->capacity * sizeof(char *));
    if (!passage->words) {
        printf("Error: Memory allocation failed for words.\n");
        free(passage);
        fclose(file);
        return NULL;
    }
    char buffer[MAX_WORD_LENGTH];
    while (fscanf(file, "%s", buffer) != EOF) {
        // Resize array if needed
        if (passage->size == passage->capacity) {
            passage->capacity *= 2;
            passage->words = (char **)realloc(passage->words, passage->capacity * sizeof(char *));
            if (!passage->words) {
                printf("Error: Memory reallocation failed.\n");
                free_passage(passage);
                fclose(file);
                return NULL;
            }
        }
        // Add word to the passage
        passage->words[passage->size] = strdup(buffer);
        if (!passage->words[passage->size]) {
            printf("Error: Memory allocation failed for a word.\n");
            free_passage(passage);
            fclose(file);
            return NULL;
        }
        passage->size++;
    }
    fclose(file);
    return passage;
}

// Free the memory allocated for a Passage
void free_passage(Passage *passage) {
    for (size_t i = 0; i < passage->size; i++) {
        free(passage->words[i]);
    }
    free(passage->words);
    free(passage);
}

// Search for an exact match of a word in the passage
int search_exact(Passage *passage, const char *word) {
    int count = 0;
    for (size_t i = 0; i < passage->size; i++) {
        if (strcmp(passage->words[i], word) == 0) {
            count++;
        }
    }
    return count;
}

// Search for words matching a given pattern
int search_pattern(Passage *passage, const char *pattern) {
    int count = 0;
    size_t pattern_len = strlen(pattern);
    int is_prefix = pattern[pattern_len - 1] == '*';
    int is_suffix = pattern[0] == '*';

    if (is_prefix) {
        // Words starting with the prefix
        for (size_t i = 0; i < passage->size; i++) {
            if (strncmp(passage->words[i], pattern, pattern_len - 1) == 0) {
                count++;
            }
        }
    } else if (is_suffix) {
        // Words ending with the suffix
        for (size_t i = 0; i < passage->size; i++) {
            size_t word_len = strlen(passage->words[i]);
            if (word_len >= pattern_len - 1 &&
                strcmp(passage->words[i] + word_len - (pattern_len - 1), pattern + 1) == 0) {
                count++;
            }
        }
    }
    return count;
}

// Print search results
void print_results(const char *query, int result) {
    printf("Query: '%s' -> Matches: %d\n", query, result);
}
// Main function to test the Passage ADT
int main() {
    const char *filename = "passage.txt";
    // Create the Passage from the file
    Passage *passage = create_passage(filename);
    if (!passage) return 1;
    // Perform exact and pattern-based searches
    char *queries[] = {"man", "woman*", "*man", "data"};
    size_t num_queries = sizeof(queries) / sizeof(queries[0]);
    for (size_t i = 0; i < num_queries; i++) {
        if (queries[i][0] == '*' || queries[i][strlen(queries[i]) - 1] == '*') {
            // Pattern-based search
            int result = search_pattern(passage, queries[i]);
            print_results(queries[i], result);
        } else {
            // Exact search
            int result = search_exact(passage, queries[i]);
            print_results(queries[i], result);
        }
    }

    // Free the allocated memory
    free_passage(passage);

    return 0;
}


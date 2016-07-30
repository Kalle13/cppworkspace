#include <stdio.h>
#include <vector>

void SecurityFunctionInverses(void);
void SortSmallestToLargest(void);

int main(){

    SecurityFunctionInverses();

    return 0;
}

void SecurityFunctionInverses(void){
    int numElements = 0;
    int tempFuncValue = 0;
    int funcFMin = 0;
    int funcFMax = 0;
    int funcGMax = 0;
    int newMin = 0;
    std::vector<int> funcF;
    std::vector<int> funcG;

    scanf("%d", &numElements);

    // input function F values; return if two function values are the same
    for(int i=0;i<numElements;i++){
        scanf("%d",&tempFuncValue);
        sortVector.push_back(tempFuncValue);
        if(i>=1){
            for(int j = 0;j<i-1;j++){
                if(funcF[i] == funcF[j]){
                    printf("funcF is not a bijective function!");
                    return;
                }
            }
        }
    }

    // find the largest element of funcF
    for(int i=0;i<numElements;i++){
        if(funcF[i] > funcFMax)  funcFMax = funcF[i];
    }


    // find the smallest element of funcF
    funFMin = funcFMax;
    for(int i=0;i<numElements;i++){
        if(funcF[i] < funcFMin)   funcFMin = funcF[i];
    }

    funG.push_back(funcFMin);

    // Uncomment for debug
    if(funcG[0]) printf("funcG[0] = %d (should be equal to funcFMin)\n",funcG[0]);

    funcGMax = funcG[0];
    newMin = funcFMax;

    for(int i=0;i<numElements;i++){
        for(int j=0;j<numElements;j++){
            if((funcF[j] > funcGMax) && (funcF[j] < newMin)){
                newMin = funcF[j];
                printf("newMin = %d\n", newMin);
            }
        }
        funcG.push_back(newMin);
        funcGMax = newMin;
        newMin = funcFMax;
    }


}

void SortSmallestToLargest(void){
    int numElements = 0;
    int vectorValue = 0;
    int sortVectorMax = 0;
    int sortVectorMin = 0;
    int sortedVectorMax = 0;
    int newMin = 0;
    int sortedVectorLength = 0;
    std::vector<int> sortVector;
    std::vector<int> sortedVector;
    scanf("%d\n",&numElements);

    // input values to be sorted; return if two values are the same
    for(int i=0;i<numElements;i++){
        scanf("%d",&vectorValue);
        sortVector.push_back(vectorValue);
        if(i>=1){
            for(int j = 0;j<i-1;j++){
                if(sortVector[i] == sortVector[j]){
                    printf("sortVector is not a bijective function!");
                    return;
                }
            }
        }
    }

    // find the largest element of sortVector
    for(int i=0;i<numElements;i++){
        if(sortVector[i] > sortVectorMax)   sortVectorMax = sortVector[i];
    }


    // find the smallest element of sortVector
    sortVectorMin = sortVectorMax;
    for(int i=0;i<numElements;i++){
        if(sortVector[i] < sortVectorMin)   sortVectorMin = sortVector[i];
    }

    // Uncomment for debug
    printf("sortVectorMax = %d\nsortVectorMin = %d\n", sortVectorMax, sortVectorMin);

    sortedVector.push_back(sortVectorMin);

    // Uncomment for debug
    if(sortedVector[0]) printf("sortedVector[0] = %d (should be equal to sortVectorMin)\n",sortedVector[0]);

    sortedVectorMax = sortedVector[0];
    newMin = sortVectorMax;

    for(int i=0;i<numElements;i++){
        for(int j=0;j<numElements;j++){
            if((sortVector[j] > sortedVectorMax) && (sortVector[j] < newMin)){
                newMin = sortVector[j];
                printf("newMin = %d\n", newMin);
            }
        }
        sortedVector.push_back(newMin);
        sortedVectorMax = newMin;
        newMin = sortVectorMax;
    }

    sortedVectorLength = sizeof(sortedVector)/sizeof(int);
/*
    if(sortedVectorLength != numElements){
        printf("ERROR: Number of sortedVector elements != numElements");
        return;
    }
*/
    for(int i = 0; i<numElements;i++){
        printf("%d\n",sortedVector[i]);
    }

}

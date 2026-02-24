class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        // It is perfectly okay to create these variables!
        int totalDrunk = numBottles; 
        int currentEmpty = numBottles; 
        
        while(currentEmpty >= numExchange) {
            int newBottles = currentEmpty / numExchange;
            int leftOver = currentEmpty % numExchange;
            
            totalDrunk += newBottles;
            currentEmpty = newBottles + leftOver;
        }
        
        return totalDrunk;
    }
};
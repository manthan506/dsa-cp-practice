class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
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

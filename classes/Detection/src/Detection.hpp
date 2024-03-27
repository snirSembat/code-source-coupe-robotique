#ifndef DETECTION_HPP
#define DETECTION_HPP

class Detection {
    
    public:
        Detection(int brocheCapteurAV, int brocheCapteurAR);
        Detection(int brocheCapteurAVG,int brocheCapteurAVD,int brocheCapteurARG,int brocheCapteurARD);
           
       
        bool obstacleDevant()const;
        bool obstacleDerriere()const;
        
        int setSeuilObstacle (int seuilObstacle);

        int mesureAV()const;
        int mesureAR()const;
    
       
                
    private:
               
        int brocheCapteurAV ;
        int brocheCapteurAR;
        int brocheCapteurAVG;
        int brocheCapteurAVD;
        int brocheCapteurARD;
        int brocheCapteurARG;
    
        int seuilObstacle;       
    };

#endif 
#ifndef CHRONO_HPP
#define CHRONO_HPP

class Chrono {
    public:
        Chrono();
        void start()const;
        void stop();
        void reset();
        int getTempsEcoule()const;
        int getTempsRestant()const;
        void veriFinMatch()const;

    private:
        static int tempsInitial;
        static int tempsRestant;

};

#endif
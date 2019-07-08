namespace sf::sd
{
    template <class T, typename D>
    class User
    {
        public:

            /**
             * here is the constructor
             */
            User();
            User(std::string name, int skillLevel);
            ~User();

            /*
            * this is not a doc comment
            */

            // sets user
            void setName(std::string name);
            std::string getName();

            virtual void play() = 0;

            void move();

            GameState* getGameState();
            GameRef& getGameRef();
            SuperPower* getSuperPower();

            template <typename T>
            T getEnemy();

        private: // private methods

            std::string m_name;
            SuperPower* m_power;
            GameState *m_gameState;
            GameRef& m_gameRef;
    };
}
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>
//getwindowfromid
class Window {
    private:
        SDL_Window * window;
    public:
        Window(const char *title,int x, int y, int w,int h, Uint32 flags){
            this->window = SDL_CreateWindow(title, x, y, w, h, flags);
        }
        Window(const void *data){
            this->window = SDL_CreateWindowFrom(data);
        }
        Window (SDL_Window * window){
            this->window = window;
        }
        int FlashOperation(SDL_FlashOperation operation){
            return SDL_FlashWindow(this->window, operation);
        }
        int GetBordersSize (int *top, int *left, int *bottom, int *right){
            return SDL_GetWindowBordersSize(this->window, top,left,bottom,right);
        }
        float GetBrightness(){
            return SDL_GetWindowBrightness(this->window);
        }
        int GetDisplayIndex(){
            return SDL_GetWindowDisplayIndex(this->window);
        }
        int GetDisplayMode(SDL_DisplayMode *mode){
            return SDL_GetWindowDisplayMode(this->window,mode);
        }
        void* GetData(const char *name){
            return SDL_GetWindowData(this->window, name);
        };
        Uint32 GetFlags(){
            return SDL_GetWindowFlags(this->window);
        };
        SDL_bool GetGrab(){
            return SDL_GetWindowGrab(this->window);
        }
        SDL_bool GetKeyboardGrab(){
            return SDL_GetWindowKeyboardGrab(this->window);
        }
        SDL_bool GetMouseGrab(){
            return SDL_GetWindowMouseGrab(this->window);
        }
        void GetPosition(int *x, int *y){
            SDL_GetWindowPosition(this->window, x, y);
        }
        void GetSize(int *w,int *h){
            SDL_GetWindowSize(this->window, w, h);
        }
        const char* GetTitle(){
            return SDL_GetWindowTitle(this->window);
        }
        static Window GetWindowfromID(Uint32 id){
            return Window(SDL_GetWindowFromID(id));
        }
        void Hide(){
            SDL_HideWindow(this->window);
        }
        void Maximize(){
            SDL_MaximizeWindow(this->window);
        }
        void Minimize(){
            SDL_MinimizeWindow(this->window);
        }
        void Raise(){
            SDL_RaiseWindow(this->window);
        }
        void Restore(){
            SDL_RestoreWindow(this->window);
        }
        void* SetData(const char *name,void *userdata){
            return SDL_SetWindowData(this->window, name, userdata);
        }
        int SetFullscreen(Uint32 flags){
            return SDL_SetWindowFullscreen(this->window, flags);
        }
        void SetGrab(SDL_bool grabbed){
            SDL_SetWindowGrab(this->window, grabbed);
        }
        void SetKeyboardGrab(SDL_bool grabbed){
            SDL_SetWindowKeyboardGrab(this->window, grabbed);
        }
        void SetMouseGrab(SDL_bool grabbed){
            SDL_SetWindowMouseGrab(this->window, grabbed);
        }
        void SetIcon(SDL_Surface * icon){
            SDL_SetWindowIcon(this->window, icon);
        }
        void SetPosition(int x, int y){
            SDL_SetWindowPosition(this->window, x, y);
        }
        void SetSize(int w,int h){
            SDL_SetWindowSize(this->window, w, h);
        }
        void SetBordered(SDL_bool bordered){
            SDL_SetWindowBordered(this->window, bordered);
        }
        void SetResizable(SDL_bool resizable){
            SDL_SetWindowResizable(this->window, resizable);
        }
        void SetTitle(const char *title){
            SDL_SetWindowTitle(this->window,title);
        }
        void Show(){
            SDL_ShowWindow(this->window);
        }
        ~Window(){
            SDL_DestroyWindow(this->window);
        }

};
// Naming convention [module_name]_type/method
// Using static to hide private functions outside of module
// Indent
//

// This is the main comment object which can be constructed via `comment_new()`;
typedef struct {
    const char* fullname;
} comment;

comment             comment_new(const char* fullname);
void                comment_save();
void                comment_destroy();
void                comment_update();

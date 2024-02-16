extern const int i{42}; //declaration and definition
 
/** The reason for specifiying int i with extern keyword is , by default
 * const global variable has internal linkage, so to make it external 
 * linkage, we use extern keyword */
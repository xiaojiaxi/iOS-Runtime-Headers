/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLCloudLibraryLayoutConfiguration;

@interface PLCloudLibraryLayoutStore : NSObject {
    PLCloudLibraryLayoutConfiguration *_config;
}

+ (void)validateConfiguration:(id)arg1;

- (void)enumerateCategoriesWithBlock:(id)arg1;
- (unsigned int)excludeAsset:(id)arg1;
- (unsigned int)includeAsset:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)resetStore;

@end

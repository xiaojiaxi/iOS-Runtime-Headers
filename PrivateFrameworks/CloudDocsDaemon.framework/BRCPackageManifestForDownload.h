/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCAccountSession, BRCItemID, BRCLocalContainer, NSString;

@interface BRCPackageManifestForDownload : NSObject {
    BRCLocalContainer *_container;
    unsigned int _correspondingLiveDocumentID;
    unsigned long long _correspondingLiveFileID;
    NSString *_etag;
    BRCItemID *_itemID;
    unsigned long long _manifestFileID;
    NSString *_manifestID;
    NSString *_manifestPath;
    BRCAccountSession *_session;
    unsigned long long _stageManifestFileID;
}

@property unsigned int correspondingLiveDocumentID;
@property unsigned long long correspondingLiveFileID;
@property(readonly) BRCItemID * itemID;
@property(readonly) NSString * manifestID;

+ (id)itemIDForManifestID:(id)arg1 etag:(id*)arg2;
+ (id)manifestIDForItemID:(id)arg1 etag:(id)arg2;
+ (id)stagedPackageRootFileIDForItemID:(id)arg1 etag:(id)arg2 container:(id)arg3;

- (void).cxx_destruct;
- (void)_applyDirectoryMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (void)_applyFileMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (unsigned short)_computedFileModeForPackageItem:(id)arg1;
- (BOOL)_enumerateItemsOfClass:(Class)arg1 fileID:(unsigned long long)arg2 handler:(id)arg3;
- (BOOL)_packageItem:(id)arg1 matchesMode:(unsigned short)arg2;
- (BOOL)_stageExistingPackageItem:(id)arg1 withLiveFd:(int)arg2 stageFd:(int)arg3;
- (BOOL)beginStageWithManifestPath:(id)arg1 error:(id*)arg2;
- (unsigned int)correspondingLiveDocumentID;
- (unsigned long long)correspondingLiveFileID;
- (id)desiredIndicesInPackage:(id)arg1;
- (BOOL)enumerateItems:(id)arg1;
- (BOOL)enumerateStagedItems:(id)arg1;
- (id)initWithContainer:(id)arg1 itemID:(id)arg2 etag:(id)arg3;
- (id)itemID;
- (id)manifestID;
- (id)manifestPath;
- (void)setCorrespondingLiveDocumentID:(unsigned int)arg1;
- (void)setCorrespondingLiveFileID:(unsigned long long)arg1;
- (BOOL)stagePackageWithContentRecord:(id)arg1 error:(id*)arg2;

@end
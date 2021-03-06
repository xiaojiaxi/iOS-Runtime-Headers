/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray;

@interface CKFetchSharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray *_shareIDs;
    NSArray *_zoneIDs;
}

@property(retain) NSArray * shareIDs;
@property(retain) NSArray * zoneIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShareIDs:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (id)shareIDs;
- (id)zoneIDs;

@end

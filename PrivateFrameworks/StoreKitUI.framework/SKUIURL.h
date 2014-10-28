/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface SKUIURL : NSObject <NSCopying> {
    NSMutableDictionary *_queryDictionary;
    NSString *_referrerApplicationName;
    NSString *_referrerURLString;
    NSURL *_url;
}

@property(readonly) NSString * URLBagKey;
@property(readonly) NSString * actionString;
@property(copy,readonly) NSDictionary * queryStringDictionary;
@property(readonly) NSString * redeemCode;
@property(copy) NSString * referrerApplicationName;
@property(copy) NSString * referrerURLString;
@property(readonly) NSString * searchTerm;
@property(readonly) NSURL * underlyingURL;

- (void).cxx_destruct;
- (id)URLBagKey;
- (id)_queryDictionary;
- (id)_searchGroupForSearchKind:(id)arg1;
- (id)_searchURLBagKey;
- (id)actionString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)initWithURL:(id)arg1;
- (id)initWithURLBagKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)newURLRequest;
- (id)newURLRequestWithBaseURL:(id)arg1;
- (id)queryStringDictionary;
- (id)redeemCode;
- (id)referrerApplicationName;
- (id)referrerURLString;
- (id)searchTerm;
- (void)setReferrerApplicationName:(id)arg1;
- (void)setReferrerURLString:(id)arg1;
- (id)underlyingURL;
- (id)valueForQueryParameter:(id)arg1;

@end
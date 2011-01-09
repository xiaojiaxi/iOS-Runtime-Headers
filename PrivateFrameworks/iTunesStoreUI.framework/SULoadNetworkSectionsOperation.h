/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUSectionsResponse, ISStoreURLOperation, NSString;



@interface SULoadNetworkSectionsOperation : ISOperation 
{
    ISStoreURLOperation *_baseOperation;
    NSString *_expectedVersionString;
    SUSectionsResponse *_sectionsResponse;
}

@property(retain) ISStoreURLOperation *baseOperation;
@property(retain) NSString *expectedVersionString;
@property(readonly) SUSectionsResponse *sectionsResponse;


- (id)initWithURL:(id)arg1;
- (void)run;
- (void)dealloc;
- (id)baseOperation;
- (id)expectedVersionString;
- (id)_copyLoadedItemImage:(id)arg1 returningError:(id*)arg2;
- (id)_itemImageForSection:(id)arg1 imageType:(NSInteger)arg2;
- (BOOL)_loadArtworkForSections:(id)arg1 returningError:(id*)arg2;
- (void)setBaseOperation:(id)arg1;
- (void)setExpectedVersionString:(id)arg1;
- (id)sectionsResponse;
- (void)_setSectionsResponse:(id)arg1;

@end
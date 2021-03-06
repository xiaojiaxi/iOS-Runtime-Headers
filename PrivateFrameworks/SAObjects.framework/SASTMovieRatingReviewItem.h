/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SASTTemplatePercentageRating, SAUIDecoratedText;

@interface SASTMovieRatingReviewItem : AceObject <SASTTemplateItem> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) SAUIDecoratedText * reviews;
@property(readonly) Class superclass;
@property(retain) SASTTemplatePercentageRating * templatePercentageRating;

+ (id)movieRatingReviewItem;
+ (id)movieRatingReviewItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)reviews;
- (void)setReviews:(id)arg1;
- (void)setTemplatePercentageRating:(id)arg1;
- (id)templatePercentageRating;

@end

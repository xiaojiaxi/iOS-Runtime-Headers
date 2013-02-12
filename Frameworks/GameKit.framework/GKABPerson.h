/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKABPerson : NSObject {
    NSString *_firstName;
    NSString *_lastName;
}

@property(retain) NSString *firstName;
@property(retain) NSString *lastName;

+ (id)personForContact:(void*)arg1;
+ (id)personForPlayer:(id)arg1;
+ (id)personWithFirstName:(id)arg1 lastName:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)firstName;
- (id)lastName;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;

@end
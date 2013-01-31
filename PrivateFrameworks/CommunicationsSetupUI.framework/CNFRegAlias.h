/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class NSString, IMAccount;

@interface CNFRegAlias : NSObject  {
    NSString *_alias;
    NSString *_displayName;
    IMAccount *_account;
}

@property(readonly) NSString * displayName;
@property(copy) NSString * alias;
@property(retain) IMAccount * account;
@property(readonly) int type;
@property(readonly) NSString * identifier;


- (id)identifier;
- (int)type;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)validate;
- (void)setDisplayName:(id)arg1;
- (void)setAccount:(id)arg1;
- (id)account;
- (int)localizedCaseInsensitiveCompare:(id)arg1;
- (BOOL)isLocalPhoneNumberAlias;
- (int)validationErrorReason;
- (BOOL)isPhoneNumberAliasOnPhoneNumberAccount;
- (int)validationStatus;
- (id)initWithAccount:(id)arg1 alias:(id)arg2;
- (id)displayName;
- (void)setAlias:(id)arg1;
- (id)alias;

@end
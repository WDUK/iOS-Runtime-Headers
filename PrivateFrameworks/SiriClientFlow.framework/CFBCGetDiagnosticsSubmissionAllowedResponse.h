/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFBCGetDiagnosticsSubmissionAllowedResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic) BOOL allowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getDiagnosticsSubmissionAllowedResponse;
+ (id)getDiagnosticsSubmissionAllowedResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;

- (BOOL)allowed;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAllowed:(BOOL)arg1;

@end

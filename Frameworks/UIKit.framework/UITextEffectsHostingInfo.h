/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextEffectsHostingInfo : NSObject <_UIScreenBasedObject> {
    unsigned int  _hostedUseCount;
    NSDictionary * _perScreenOptions;
    UIScreen * _screen;
}

@property (readonly) UIScreen *_intendedScreen;
@property (readonly) NSDictionary *_options;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSDictionary *perScreenOptions;
@property (nonatomic, retain) UIScreen *screen;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useHostedInstance;

+ (id)hostingInfoForScreen:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_intendedScreen;
- (BOOL)_matchingOptions:(id)arg1;
- (id)_options;
- (id)perScreenOptions;
- (id)screen;
- (void)setPerScreenOptions:(id)arg1;
- (void)setScreen:(id)arg1;
- (void)setUseHostedInstance:(BOOL)arg1;
- (BOOL)useHostedInstance;

@end

/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@class NSString;

@interface DPTextLayer : SKLayer  {
    int _fontSize;
    struct __GSFont { } *_font;
    struct CGColor { } *_fontColor;
    NSString *_text;
    BOOL _isLeftJustified;
    BOOL _isRightJustified;
    BOOL _isTopJustified;
    BOOL _isBottomJustified;
    int _ellipsis;
    BOOL _retarded;
    struct CGPoint { 
        float x; 
        float y; 
    } _origin;
}


- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)setFontColor:(struct CGColor { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setRightJustified;
- (void)setLeftJustified;
- (void)setEllipsisStyle:(int)arg1;
- (void)setFontWithName:(const char *)arg1 size:(int)arg2;
- (void)setTopJustified;
- (void)setBottomJustified:(BOOL)arg1;
- (float)contentHeight;
- (void)setFontSize:(int)arg1;
- (id)text;
- (void)setOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFont:(struct __GSFont { }*)arg1;
- (void)setText:(id)arg1;

@end
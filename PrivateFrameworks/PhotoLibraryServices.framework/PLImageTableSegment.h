/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLImageTable;

@interface PLImageTableSegment : NSObject  {
    PLImageTable *_imageTable;
    unsigned long _index;
    void *_ptr;
    unsigned long _length;
    BOOL _dying;
}


- (void*)bytes;
- (id)initWithImageTable:(id)arg1 offset:(long long)arg2 length:(unsigned long)arg3;
- (id)initWithImageTable:(id)arg1 index:(unsigned long)arg2 length:(unsigned long)arg3 idealAddress:(void*)arg4;
- (oneway void)release;
- (void)dealloc;

@end
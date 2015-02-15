/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKItem;
#import <BrowserKit/BrowserKit-Structs.h>
@class NSObject, BKItemFormatManager, NSString;

@interface BKImageBrowserItem : NSObject {

	NSObject*<BKItem> _item;
	BKItemFormatManager* _itemFormatManager;
	id _delegate;
	NSString* _lastImageRepresentationType;
	unsigned long long _version;
	long long _index;
	struct {
		unsigned _observingImageKeys : 1;
		unsigned _observingOtherKeys : 1;
		unsigned _observingFinderKeys : 1;
		unsigned _useRepresentation : 2;
		unsigned _unused : 27;
	}  _flags;

}

@property (assign) id delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)fontAttributesForSize:(float)arg1 isBold:(char)arg2 alignment:(unsigned long long)arg3 color:(id)arg4 ;
+(id)imageRepresentationTypes;
+(id)imageKeys;
+(double)fontSize;
-(id)itemFormatManager;
-(long long)finderLabelColorIndex;
-(char)showsDropShadow;
-(void)beginObservingOtherKeys;
-(void)stopObservingImageKeys;
-(void)stopObservingOtherKeys;
-(void)stopObservingFinderKeys;
-(id)_imageRepresentationType;
-(void)beginObservingImageKeys;
-(void)beginObservingFinderKeys;
-(void)_beginObservingKeys:(id)arg1 ;
-(void)_stopObservingKeys:(id)arg1 ;
-(id)initWithItem:(id)arg1 itemFormatManager:(id)arg2 delegate:(id)arg3 ;
-(void)setIndex:(long long)arg1 ;
-(id)imageRepresentationType;
-(id)imageRepresentation;
-(id)imageUID;
-(unsigned long long)imageVersion;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)index;
-(id)delegate;
-(id)item;
-(void)setItem:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSString, NSDictionary;

@interface IKGLTextInfo : NSObject {

	NSString* _text;
	NSDictionary* _attributes;
	CGRect _specifiedRect;
	CGSize _textMinimalSize;
	float _alpha;
	char _needsPostProcess;
	id _buffer;
	CGRect _region;
	CGRect _rect;
	unsigned _textureID;
	int _subCacheSizeIndex;
	unsigned _pageIndex;
	unsigned _session;

}

@property (assign) unsigned session;                //@synthesize session=_session - In the implementation block
@property (assign) unsigned pageIndex;              //@synthesize pageIndex=_pageIndex - In the implementation block
-(void)setText:(id)arg1 ;
-(CGRect)region;
-(id)buffer;
-(unsigned)textureID;
-(void)setTextureID:(unsigned)arg1 ;
-(int)subCacheSizeIndex;
-(unsigned)pageIndex;
-(void)setSubCacheSizeIndex:(int)arg1 ;
-(void)setPageIndex:(unsigned)arg1 ;
-(void)setSession:(unsigned)arg1 ;
-(CGSize)minimalSizeForText;
-(CGRect)specifiedRect;
-(void)setMinimalSizeForText:(CGSize)arg1 ;
-(void)setNeedsPostProcess:(char)arg1 ;
-(void)setBuffer:(id)arg1 ;
-(void)setSpecifiedRect:(CGRect)arg1 ;
-(char)needsPostProcess;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setAlpha:(float)arg1 ;
-(CGRect)rect;
-(float)alpha;
-(id)text;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(void)setRegion:(CGRect)arg1 ;
-(void)setRect:(CGRect)arg1 ;
-(unsigned)session;
@end


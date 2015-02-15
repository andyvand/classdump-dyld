/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSOverdrawableTileLayer.h>

@class NSData;

@interface NSProgressiveLayer : NSOverdrawableTileLayer {

	NSData* _compressedContents;
	long long _currentCompressingContentsDrawCount;
	long long _drawCount;
	unsigned _readingContents : 1;
	unsigned _contentsNeedToBeRedrawn : 1;
	unsigned _allowSetNeedsDisplay : 1;
	unsigned _compressedContentsAreValid : 1;

}

@property (readonly) char hasCompressedContents; 
@property (readonly) long long compressedDataLength; 
+(dispatch_queue_sRef)_sharedCompressionQueue;
-(id)init;
-(void)setContentsScale:(double)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)display;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)NS_showPrefetchedContentsIfNecessaryInRect:(CGRect)arg1 ;
-(char)NS_hasPrefetchedContents;
-(unsigned long long)NS_prefetchedMemoryLength;
-(void)NS_prefetchContentsIfNecessary;
-(void)NS_dropPrefetchedContentsIfNecessary;
-(char)hasCompressedContents;
-(void)_asyncCompressContentsIfNecessary;
-(void)_dropCompressedContents;
-(id)_imageCompressionUTIType;
-(void)_setCompressedContents:(id)arg1 ;
-(id)_compressedContents;
-(void)_fastSetCompressedContents:(id)arg1 ;
-(void)_compressContentsAtDrawCount:(long long)arg1 ;
-(void)_releaseCompressedContents;
-(void)_displayCompressedContentsIfAvailable;
-(long long)compressedDataLength;
-(void)visibleTileStateChanged;
@end


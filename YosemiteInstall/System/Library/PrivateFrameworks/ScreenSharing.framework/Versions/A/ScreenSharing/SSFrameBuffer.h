/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenSharing/ScreenSharing-Structs.h>
@class NSData, NSMutableArray, SSScreenConfiguration, SSScreenInfo, NSArray;

@interface SSFrameBuffer : NSObject {

	SSSize mSize;
	double mPerceivedSessionScalingFactor;
	unsigned long long mBitsPerComponent;
	unsigned long long mBitsPerPixel;
	unsigned long long mBytesPerPixel;
	unsigned long long mBytesPerRow;
	char mShouldInterpolate;
	char mHasCursor;
	NSData* mBuffer;
	unsigned mBitmapInfo;
	CGColorSpaceRef mColorSpace;
	opaque_pthread_mutex_t mInUseMutex;
	opaque_pthread_cond_t mInUseCondition;
	unsigned long long mInUseCount;
	NSMutableArray* mObservers;
	opaque_pthread_mutex_t mObserversMutex;
	SSScreenConfiguration* mScreenConfiguration;
	SSScreenInfo* mSelectedScreen;
	double mContentsScale;
	NSArray* mScreensToDraw;
	void* mReservedForInstanceVariables;

}

@property (copy) SSScreenConfiguration * screenConfiguration; 
@property (copy) SSScreenInfo * selectedScreen; 
@property (readonly) NSArray * screensToDraw; 
@property (readonly) char showingMultipleDisplays; 
@property (readonly) char needsCoordinateTranslations; 
@property (readonly) double contentsScale; 
@property (assign) double perceivedScalingFactor; 
-(void)setSelectedScreen:(SSScreenInfo *)arg1 ;
-(SSScreenInfo *)selectedScreen;
-(SSScreenConfiguration *)screenConfiguration;
-(CGImageRef)newCGImage;
-(CGImageRef)copyImage:(CGImageRef)arg1 ;
-(void)noteRectangleChange:(SSRect)arg1 ;
-(void)rectChangedOnThread:(id)arg1 ;
-(char)showingMultipleDisplays;
-(const void*)exclusiveLock;
-(void)exclusiveUnlock;
-(void)sizeWillChangeOnThread:(id)arg1 ;
-(void)setScreenConfiguration:(SSScreenConfiguration *)arg1 ;
-(void)sizeChangedOnThread:(id)arg1 ;
-(NSArray *)screensToDraw;
-(CGImageRef)newCGImageFromRect:(SSRect)arg1 ;
-(double)_localScalingForScreen:(id)arg1 ;
-(char)needsCoordinateTranslations;
-(double)perceivedScalingFactor;
-(void)setPerceivedScalingFactor:(double)arg1 ;
-(void)notifyObserversSizeWillChange:(id)arg1 ;
-(int)setFormatWithSize:(SSSize)arg1 screenConfiguration:(id)arg2 selectedScreen:(id)arg3 localScalingFactor:(double)arg4 contentsScale:(double)arg5 withBitsPerComponent:(unsigned long long)arg6 withBitsPerPixel:(unsigned long long)arg7 withBytesPerRow:(unsigned long long)arg8 withBitmapInfo:(unsigned)arg9 shouldInterpolate:(char)arg10 hasCursor:(char)arg11 withConnection:(void*)arg12 ;
-(SSPoint)sourcePointForScreen:(id)arg1 withDestinationPoint:(CGPoint)arg2 ;
-(char)getSourceRect:(SSRect*)arg1 forScreen:(id)arg2 withDestinationRect:(CGRect)arg3 ;
-(char)getDestinationRect:(CGRect*)arg1 forScreen:(id)arg2 withSourceRect:(SSRect)arg3 checkIntersection:(char)arg4 ;
-(char)hasCursor;
-(void)addObserver:(id)arg1 onThread:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(double)contentsScale;
-(void)lock;
-(void)unlock;
-(SSSize)size;
-(void)removeObserver:(id)arg1 ;
@end

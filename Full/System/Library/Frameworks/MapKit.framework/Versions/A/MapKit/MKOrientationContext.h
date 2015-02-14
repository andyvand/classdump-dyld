/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSMutableArray, NSArray;

@interface MKOrientationContext : NSObject {

	NSMutableArray* orientViews;
	NSArray* relativeViews;
	NSView* projectionView;
	CGRect* relativeViewFrames;

}
-(void)_computeRelativeViewFrames;
-(void)_computeRelativeViewFrame:(id)arg1 ;
-(id)initWithViewsToOrient:(id)arg1 relativeViews:(id)arg2 projectionView:(NSView*)arg3 ;
-(void)invalidateView:(id)arg1 ;
-(void)dealloc;
@end


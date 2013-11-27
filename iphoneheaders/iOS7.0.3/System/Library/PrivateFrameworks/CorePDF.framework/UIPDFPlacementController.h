/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, UIPDFPageView;

@interface UIPDFPlacementController : NSObject {

	NSMutableArray* _popups;
	CGSize _viewSize;
	UIPDFPageView* pageView;

}

@property (assign,nonatomic) UIPDFPageView * pageView; 
-(void)dealloc;
-(id)viewAtIndex:(unsigned)arg1 ;
-(id)pageView;
-(void)setPageView:(id)arg1 ;
-(id)initWithAnnotations:(id)arg1 viewSize:(CGSize)arg2 ;
-(void)layoutViews:(float)arg1 ;
-(CGRect)boundsForObjectAtIndex:(unsigned)arg1 ;
-(float)yForObjectAtIndex:(unsigned)arg1 ;
-(void)shift:(float)arg1 ;
@end

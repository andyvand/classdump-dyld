/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:37:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryFramework/PhotoLibraryFramework-Structs.h>
@interface FaceWrapper : NSObject {

	BOOL imageMirrored;
	int x;
	int y;
	int size;
	int imageWidth;
	int imageHeight;
	int screenOrientation;

}

@property (assign,nonatomic) int imageWidth; 
@property (assign,nonatomic) int imageHeight; 
@property (assign,nonatomic) int x; 
@property (assign,nonatomic) int y; 
@property (assign,nonatomic) int size; 
@property (assign,nonatomic) int screenOrientation; 
@property (assign,nonatomic) BOOL imageMirrored; 
-(int)getFaceLocationInImage;
-(int)screenOrientation;
-(BOOL)imageMirrored;
-(int)computeFaceLocationUsingLeftRightLoc:(int)arg1 andTopBottomLoc:(int)arg2 ;
-(int)getFaceTopBottomLocationInImage;
-(int)getFaceLeftRightLocationInImage;
-(void)setImageMirrored:(BOOL)arg1 ;
-(BOOL)isLargeFace;
-(void)setScreenOrientation:(int)arg1 ;
-(int)getFaceLocationOnScreen;
-(CGRect)getFaceCoordsOnScreen:(CGRect)arg1 ;
-(CGRect)getFaceCoordsInImage;
-(void)swap:(int*)arg1 with:(int*)arg2 ;
-(int)size;
-(void)setSize:(int)arg1 ;
-(int)x;
-(void)setX:(int)arg1 ;
-(int)y;
-(void)setY:(int)arg1 ;
-(void)setImageWidth:(int)arg1 ;
-(void)setImageHeight:(int)arg1 ;
-(int)imageWidth;
-(int)imageHeight;
@end

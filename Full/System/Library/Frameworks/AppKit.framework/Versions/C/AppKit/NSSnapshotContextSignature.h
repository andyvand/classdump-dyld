/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSSnapshotContextSignature : NSObject {

	CGRect _modelLogicalRect;
	CGRect _modelPixelLogicalRect;
	CGRect _modelPixelDrawingRect;
	CGColorSpaceRef _colorSpace;
	unsigned long long _imageInterpolation;

}
-(void)dealloc;
-(id)description;
-(char)isApplicableForRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 ;
-(id)initWithDrawingRect:(CGRect)arg1 applicableForRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 ;
@end


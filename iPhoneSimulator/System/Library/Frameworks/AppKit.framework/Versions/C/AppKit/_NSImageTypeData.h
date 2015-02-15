/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSRegularExpression;

@interface _NSImageTypeData : NSObject {

	NSArray* imageTypes;
	NSArray* imageFileTypes;
	NSArray* imagePasteboardTypes;
	NSRegularExpression* namedImageSuffixExpression;
	NSArray* imageUnfilteredTypes;
	NSArray* imageUnfilteredFileTypes;
	NSArray* imageUnfilteredPasteboardTypes;
	NSRegularExpression* namedImageUnfilteredSuffixExpression;

}
+(void)initialize;
-(void)dealloc;
-(id)imageFileTypes;
-(id)imageUnfilteredTypes;
-(id)imageUnfilteredFileTypes;
-(id)imageUnfilteredPasteboardTypes;
-(id)imageTypes;
-(id)imagePasteboardTypes;
-(id)namedImageSuffixExpression;
-(id)namedImageUnfilteredSuffixExpression;
@end


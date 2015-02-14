/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL, NSString, NSImage;

@interface _WKActivatedElementInfo : NSObject {

	RetainPtr<NSURL>* _URL;
	RetainPtr<NSString>* _title;
	CGPoint _interactionLocation;
	RefPtr<WebKit::ShareableBitmap>* _image;
	RetainPtr<NSImage>* _nsImage;
	long long _type;
	CGRect _boundingRect;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGRect boundingRect;                       //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,copy,readonly) NSImage * image; 
@property (nonatomic,readonly) CGPoint _interactionLocation; 
-(CGRect)boundingRect;
-(id)_initWithType:(long long)arg1 URL:(id)arg2 location:(CGPoint)arg3 title:(id)arg4 rect:(CGRect)arg5 image:(ShareableBitmap*)arg6 ;
-(CGPoint)_interactionLocation;
-(NSURL *)URL;
-(NSImage *)image;
-(NSString *)title;
-(long long)type;
@end


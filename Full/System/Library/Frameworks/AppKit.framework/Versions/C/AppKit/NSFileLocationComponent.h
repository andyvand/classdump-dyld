/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSAttributedString, NSNumber;

@interface NSFileLocationComponent : NSObject {

	NSURL* _url;
	NSFileLocationComponent* _containerComponent;
	NSAttributedString* _iconAsAttributedString;
	NSNumber* _isUbiquityContainer;

}
+(id)leafFileLocationComponentWithURL:(id)arg1 ;
+(id)attributedStringForIcon:(id)arg1 ;
+(void)flushCaches;
-(void)dealloc;
-(id)url;
-(id)name;
-(id)presentableName;
-(id)containerComponent;
-(id)iconAsAttributedString;
-(id)_initWithURL:(id)arg1 ;
-(char)_isUbiquityContainer;
@end


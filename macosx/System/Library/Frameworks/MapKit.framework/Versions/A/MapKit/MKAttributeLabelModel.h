/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSImage, NSString;

@interface MKAttributeLabelModel : NSObject {

	NSImage* logo;
	NSString* text;
	double logoVerticalOffset;
	NSString* providerName;

}

@property (retain) NSImage * logo; 
@property (retain) NSString * text; 
@property (assign) double logoVerticalOffset; 
@property (retain) NSString * providerName; 
-(void)setText:(NSString *)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
-(void)setLogoVerticalOffset:(double)arg1 ;
-(double)logoVerticalOffset;
-(NSString *)providerName;
-(NSImage *)logo;
-(void)setLogo:(NSImage *)arg1 ;
-(NSString *)text;
-(id)attributedString;
@end


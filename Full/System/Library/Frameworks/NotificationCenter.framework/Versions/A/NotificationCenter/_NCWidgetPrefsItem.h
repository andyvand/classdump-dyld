/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationCenter/NSSecureCoding.h>

@class NSString;

@interface _NCWidgetPrefsItem : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _title;
	NSString* _description;
	NSString* _imagePath;
	NSString* _imageBundlePath;
	NSString* _plugInPath;
	BOOL _enabled;
	BOOL _canDisable;
	BOOL _canSort;

}

@property (copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (copy) NSString * description;                  //@synthesize description=_description - In the implementation block
@property (copy) NSString * imagePath;                    //@synthesize imagePath=_imagePath - In the implementation block
@property (copy) NSString * imageBundlePath;              //@synthesize imageBundlePath=_imageBundlePath - In the implementation block
@property (copy) NSString * plugInPath;                   //@synthesize plugInPath=_plugInPath - In the implementation block
@property (assign) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign) BOOL canDisable;                       //@synthesize canDisable=_canDisable - In the implementation block
@property (assign) BOOL canSort;                          //@synthesize canSort=_canSort - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)plugInPath;
-(void)setPlugInPath:(NSString *)arg1 ;
-(NSString *)imageBundlePath;
-(void)setImageBundlePath:(NSString *)arg1 ;
-(BOOL)canDisable;
-(void)setCanDisable:(BOOL)arg1 ;
-(BOOL)canSort;
-(void)setCanSort:(BOOL)arg1 ;
-(BOOL)enabled;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setDescription:(NSString *)arg1 ;
-(void)setImagePath:(NSString *)arg1 ;
-(NSString *)imagePath;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSImage, NSString, IAAListPlugin;

@interface IANewAccountTableItem : NSObject {

	NSImage* _image;
	NSString* _title;
	IAAListPlugin* _plugin;
	unsigned long long _type;

}

@property (retain) NSImage * image;                      //@synthesize image=_image - In the implementation block
@property (retain) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (retain) IAAListPlugin * plugin;               //@synthesize plugin=_plugin - In the implementation block
@property (assign) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)otherItem;
+(id)itemWithTitle:(id)arg1 ;
-(void)setPlugin:(IAAListPlugin *)arg1 ;
-(IAAListPlugin *)plugin;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(unsigned long long)type;
-(id)initWithTitle:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
@end


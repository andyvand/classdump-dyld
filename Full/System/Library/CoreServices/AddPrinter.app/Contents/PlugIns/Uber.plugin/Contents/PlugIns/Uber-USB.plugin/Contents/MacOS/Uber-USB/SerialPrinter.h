/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/AddPrinter.app/Contents/PlugIns/Uber.plugin/Contents/PlugIns/Uber-USB.plugin/Contents/MacOS/Uber-USB
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PMBrowser/PMBrowserPrinter.h>

@class NSString;

@interface SerialPrinter : PMBrowserPrinter {

	NSString* _name;
	NSString* _uri;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * uri;               //@synthesize uri=_uri - In the implementation block
+(id)serialPrinterWithName:(id)arg1 uri:(id)arg2 ;
-(id)browserIdentifier;
-(char)supportsFaxOperations;
-(id)dictionaryWithDriverSpecification:(id)arg1 ;
-(id)initSerialPrinterWithName:(id)arg1 uri:(id)arg2 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)location;
-(void)setUri:(NSString *)arg1 ;
-(NSString *)uri;
@end


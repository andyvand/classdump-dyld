/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PrintingPrivate.framework/Versions/A/PrintingPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSArray, NSString;

@interface PKDriver : NSObject {

	NSMutableDictionary* properties;
	id delegate;

}

@property (readonly) NSDictionary * properties; 
@property (assign) id delegate; 
@property (retain) id deviceRecord; 
@property (readonly) NSArray * naturalLanguages; 
@property (readonly) NSArray * products; 
@property (readonly) NSArray * versions; 
@property (readonly) NSString * displayName; 
@property (readonly) NSString * name; 
@property (readonly) NSString * type; 
@property (readonly) NSString * manufacturer; 
@property (readonly) NSString * deviceID; 
@property (readonly) NSString * makeModel; 
@property (readonly) NSString * modelNumber; 
@property (readonly) unsigned long long kind; 
@property (readonly) char isGenericDriver; 
@property (readonly) char canCancel; 
+(id)driverWithProperties:(id)arg1 ;
+(id)parsePPD:(const char*)arg1 ;
+(id)systemPPDOfType:(id)arg1 ;
+(id)ppds;
+(id)urfDriverFor:(id)arg1 ;
+(id)psDriverFor:(id)arg1 ;
+(id)pclDriverFor:(id)arg1 ;
+(id)faxDriverFor:(id)arg1 ;
+(id)softwareUpdateDriverFor:(id)arg1 ;
+(char)caseInsensitiveEquals:(id)arg1 str2:(id)arg2 ;
+(id)matchingDriversForDeviceID:(id)arg1 ;
+(id)matchingDriverOfType:(unsigned long long)arg1 from:(id)arg2 ;
-(NSString *)makeModel;
-(NSArray *)naturalLanguages;
-(NSArray *)products;
-(id)deviceRecord;
-(void)setDeviceRecord:(id)arg1 ;
-(char)isGenericDriver;
-(id)ppdForPrinter:(id)arg1 selection:(char)arg2 error:(id*)arg3 ;
-(NSString *)modelNumber;
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSString *)manufacturer;
-(char)canCancel;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)cancel;
-(NSString *)name;
-(id)delegate;
-(NSString *)type;
-(long long)compare:(id)arg1 ;
-(NSString *)displayName;
-(id)initWithProperties:(id)arg1 ;
-(NSString *)deviceID;
-(NSDictionary *)properties;
-(unsigned long long)kind;
-(NSArray *)versions;
@end


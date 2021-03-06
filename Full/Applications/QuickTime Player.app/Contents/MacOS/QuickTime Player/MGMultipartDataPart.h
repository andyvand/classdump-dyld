/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSInputStream;

@interface MGMultipartDataPart : NSObject {

	NSString* _headersAsString;
	NSInputStream* _contentAsStream;
	unsigned long long _contentLength;

}

@property (nonatomic,readonly) NSString * headersAsString;                    //@synthesize headersAsString=_headersAsString - In the implementation block
@property (nonatomic,readonly) NSInputStream * contentAsStream;               //@synthesize contentAsStream=_contentAsStream - In the implementation block
@property (nonatomic,readonly) unsigned long long contentLength;              //@synthesize contentLength=_contentLength - In the implementation block
+(id)partWithName:(id)arg1 dataContent:(id)arg2 vendorID:(id)arg3 ;
+(id)partWithName:(id)arg1 fileContent:(id)arg2 vendorID:(id)arg3 ;
-(NSString *)headersAsString;
-(NSInputStream *)contentAsStream;
-(id)initWithName:(id)arg1 dataContent:(id)arg2 vendorID:(id)arg3 ;
-(id)initWithName:(id)arg1 fileContent:(id)arg2 vendorID:(id)arg3 ;
-(id)initWithHeaders:(id)arg1 dataContent:(id)arg2 ;
-(id)initWithHeaders:(id)arg1 streamContent:(id)arg2 length:(unsigned long long)arg3 ;
-(unsigned long long)contentLength;
@end


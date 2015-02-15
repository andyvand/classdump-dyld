/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IconServices/IconServices-Structs.h>
@class NSURL, NSData;

@interface ISStoreIndex : NSObject {

	NSURL* _indexFileURL;
	NSData* _data;

}

@property (readonly) NSURL * indexFileURL;              //@synthesize indexFileURL=_indexFileURL - In the implementation block
@property (readonly) NSData * data; 
-(NSURL *)indexFileURL;
-(void)enumerateValuesWithBock:(/*^block*/id)arg1 ;
-(id)initWithStoreFileURL:(id)arg1 ;
-(void)enumerateValuesForKey:(unsigned long long)arg1 bock:(/*^block*/id)arg2 ;
-(char)queryStoreIndexWithBinding:(LSBindingRef)arg1 size:(unsigned)arg2 scale:(unsigned)arg3 match:(SCD_Struct_IS3*)arg4 ;
-(void)dealloc;
-(id)description;
-(NSData *)data;
@end


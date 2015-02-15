/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface CKPackageSection : NSObject {

	long long _index;
	NSData* _signature;
	long long _size;

}

@property (nonatomic,readonly) long long index;                 //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSData * signature;              //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) long long size;                    //@synthesize size=_size - In the implementation block
-(id)CKPropertiesDescription;
-(id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(long long)arg3 ;
-(id)description;
-(long long)index;
-(long long)size;
-(void)setSize:(long long)arg1 ;
-(NSData *)signature;
@end


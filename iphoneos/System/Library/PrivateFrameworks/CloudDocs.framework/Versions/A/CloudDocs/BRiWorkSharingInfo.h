/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <CloudDocs/NSSecureCoding.h>
#import <CloudDocs/NSCopying.h>

@interface BRiWorkSharingInfo : NSObject <NSSecureCoding, NSCopying> {

	char _options;

}

@property (assign,nonatomic) char options;              //@synthesize options=_options - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithSharingInfo:(id)arg1 ;
-(char)isEqualToiWorkSharingInfo:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOptions:(char)arg1 ;
-(char)options;
-(void)setOptions:(char)arg1 ;
@end


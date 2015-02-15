/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MecabraFacemarkCandidate : NSObject {

	NSString* _string;
	NSString* _category;

}

@property (readonly) NSString * string;                //@synthesize string=_string - In the implementation block
@property (readonly) NSString * category;              //@synthesize category=_category - In the implementation block
+(id)copyFacemarkCandidatesForLocale:(id)arg1 ;
-(id)initWithString:(id)arg1 category:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)string;
-(NSString *)category;
@end


/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MecabraFacemarkCandidate : NSObject {

	NSString* _string;
	NSString* _category;

}

@property (readonly) NSString * string;                //@synthesize string=_string - In the implementation block
@property (readonly) NSString * category;              //@synthesize category=_category - In the implementation block
+(id)copyFacemarkCandidatesForLocale:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)string;
-(id)category;
-(id)initWithString:(id)arg1 category:(id)arg2 ;
@end

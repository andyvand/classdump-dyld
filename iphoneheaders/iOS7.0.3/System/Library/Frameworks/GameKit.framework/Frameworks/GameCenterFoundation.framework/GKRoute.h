/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSRegularExpression, NSArray, NSString;

@interface GKRoute : NSObject {

	NSRegularExpression* _regex;
	NSArray* _parameterNames;
	NSString* _scheme;

}
-(id)initWithString:(id)arg1 scheme:(id)arg2 ;
-(id)nonParameterCharacterSet;
-(BOOL)matchesURL:(id)arg1 parameters:(id*)arg2 ;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(BOOL)matchesURL:(id)arg1 ;
@end

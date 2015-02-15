/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:07 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPResponse.h>

@class NSString, NSArray;

@interface IMAPOtherResponse : IMAPResponse {

	NSString* _responseName;
	NSArray* _parameters;

}

@property (nonatomic,copy) NSString * responseName;              //@synthesize responseName=_responseName - In the implementation block
@property (nonatomic,copy) NSArray * parameters;                 //@synthesize parameters=_parameters - In the implementation block
-(id)description;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(NSString *)responseName;
-(void)setResponseName:(NSString *)arg1 ;
@end


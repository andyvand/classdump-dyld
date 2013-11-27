/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface ICEResultQuery : NSObject {

	unsigned long callID;
	tagCONNRESULT* result;
	BOOL isQueryAnswered;

}

@property (assign) tagCONNRESULT* result; 
@property (assign) unsigned long callID; 
@property (assign) BOOL isQueryAnswered; 
-(void)dealloc;
-(id)initWithResult:(tagCONNRESULT*)arg1 ;
-(id)initWithCallID:(unsigned long)arg1 ;
-(void)setResult:(tagCONNRESULT*)arg1 ;
-(tagCONNRESULT*)result;
-(unsigned long)callID;
-(void)setCallID:(unsigned long)arg1 ;
-(BOOL)isQueryAnswered;
-(void)setIsQueryAnswered:(BOOL)arg1 ;
@end

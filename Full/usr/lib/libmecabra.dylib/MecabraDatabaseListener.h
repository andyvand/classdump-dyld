/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libmecabra.dylib/libmecabra.dylib-Structs.h>
@interface MecabraDatabaseListener : NSObject {

	LearningDictionary* target;

}
-(void)databaseChanged;
-(void)databaseShouldRefresh;
-(id)initWithLearningDictionary:(LearningDictionary*)arg1 ;
-(void)dealloc;
@end


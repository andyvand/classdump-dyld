/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ExFAT.framework/ExFAT
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol UserFSFolder <UserFSItem>
@required
-(id)childNamed:(id)arg1;
-(BOOL)deleteChildNamed:(id)arg1;
-(int)readChildrenIntoArray:(id)arg1 withState:(id*)arg2;
@end

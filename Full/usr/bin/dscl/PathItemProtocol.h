/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/dscl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PathItemProtocol
@required
-(int)authenticateName:(id)arg1 withPassword:(id)arg2 authOnly:(char)arg3;
-(int)read:(id)arg1;
-(id)getList;
-(int)list:(id)arg1 key:(id)arg2;
-(id)cd:(id)arg1;
-(id)getDictionary:(id)arg1;
-(void)printDictionary:(id)arg1 withRequestedKeys:(id)arg2;
-(id)getListWithKeys:(id)arg1;
-(int)read:(id)arg1 atIndex:(int)arg2 plistPath:(id)arg3;
-(int)appendKey:(id)arg1 withValues:(id)arg2;
-(int)setPasswordArray:(id)arg1;
-(int)createKey:(id)arg1 withValues:(id)arg2;
-(int)create:(id)arg1 plistPath:(id)arg2 values:(id)arg3;
-(int)create:(id)arg1 atIndex:(int)arg2 plistPath:(id)arg3 values:(id)arg4;
-(int)deleteItem;
-(int)deleteKey:(id)arg1 withValues:(id)arg2;
-(int)delete:(id)arg1 plistPath:(id)arg2 values:(id)arg3;
-(int)delete:(id)arg1 atIndex:(int)arg2 plistPath:(id)arg3 values:(id)arg4;
-(id)getPossibleCompletionsFor:(id)arg1;
-(int)mergeKey:(id)arg1 withValues:(id)arg2;
-(int)changeKey:(id)arg1 oldAndNewValues:(id)arg2;
-(int)changeKey:(id)arg1 indexAndNewValue:(id)arg2;
-(int)readAll:(id)arg1;
-(int)read:(id)arg1 keys:(id)arg2;
-(int)read:(id)arg1 plistPath:(id)arg2;
-(int)searchForKey:(id)arg1 withValue:(id)arg2 matchType:(id)arg3;
-(int)authenticateName:(id)arg1 withPassword:(id)arg2;
-(id)nodeName;
-(id)name;

@end


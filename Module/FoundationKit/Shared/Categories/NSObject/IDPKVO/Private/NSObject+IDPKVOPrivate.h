//
//  NSObject+IDPKVOPrivate.h
//  iOS
//
//  Created by Oleksa Korin on 30/1/15.
//  Copyright (c) 2015 IDAP Group. All rights reserved.
//

#import <Foundation/Foundation.h>

extern
NSString *IDPKVONameOfClass(Class cls);

@interface NSObject (IDPKVOPrivate)

+ (Class)KVOClass;

- (Class)isa;
- (Class)KVOClass;

- (BOOL)isKVOClassObject;

@end

//
//  NSWindowController+Initialization.m
//  CocoaTest
//
//  Created by Denis Halabuzar on 11/23/12.
//  Copyright (c) 2012 IDAP Group. All rights reserved.
//

#import "NSWindowController+IDPExtension.h"

@implementation NSWindowController (IDPExtension)

+ (instancetype)controller {
    return [[self alloc] initWithWindowNibName:NSStringFromClass(self)];
}

@end

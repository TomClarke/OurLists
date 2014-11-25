//
//  UITableViewController+ListTableViewController.m
//  OurList
//
//  Created by Thomas Clarke on 25/11/2014.
//  Copyright (c) 2014 TClarke. All rights reserved.
//

#import "ListTableViewController.h"

@implementation ListTableViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    PFObject *testObject = [PFObject objectWithClassName:@"TestObject"];
    testObject[@"foo"] = @"bar";
    [testObject saveInBackground];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end

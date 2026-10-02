use std::fs;

#[derive(Clone, Debug)]
struct Node {
    data: i32,
    node: Option<Box<Node>>,
}

impl Node {
    fn new(data: i32) -> Self {
        Node { data, node: None }
    }
    fn add_to_end(&mut self, data: i32) {
        let mut current = self;
        while let Some(ref mut next) = current.node {
            current = next;
        }
        current.node = Some(Box::new(Self { data, node: None }));
    }
    fn print(&self) {
        let mut current = Some(self);
        while let Some(node) = current {
            println!("{:?}", node.data);
            current = node.node.as_deref();
        }
        println!("end");
        println!("{:?}", self);
    }

    fn add_to_start(self, data: i32) -> Self {
        Node {
            data,
            node: Some(Box::new(self)),
        }
    }
}

fn main() {
    let mut ll = Node::new(12);
    ll.add_to_end(10);
    ll.add_to_end(11);
    ll.add_to_end(9);
    let ll = ll.add_to_start(1);
    ll.print();
}
